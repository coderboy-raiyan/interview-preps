import { Client } from "pg";

const client = new Client({
  host: "localhost",
  port: 5432,
  database: "Employees",
  user: "postgres",
  password: "123456",
});

export default client;
