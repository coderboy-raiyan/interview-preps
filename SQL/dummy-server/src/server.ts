import express, { Request, Response } from "express";
import client from "./db_client";
const app = express();
const port = 5000;

app.get("/", async (req: Request, res: Response) => {
  const { rows } = await client.query("SELECT * FROM Employees LIMIT 4");
  res.status(200).json({ data: rows });
});

async function bootstrap() {
  try {
    await client.connect();
    console.log("db connected successfully");
    app.listen(port, () => {
      console.log(`Example app listening on port ${port}`);
    });
  } catch (error) {
    console.log(error);
  }
}

bootstrap();
