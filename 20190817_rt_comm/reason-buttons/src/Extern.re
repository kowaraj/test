[@bs.val] external portEnv: option(string) = "process.env.PORT";
[@bs.val] external parseInt: (string,int) => int = "parseInt";


module Http = {
  type http;
  [@bs.module "http"] external create: Express.App.t => http = "Server";
  [@bs.send] external listen: (http, int, unit => unit) => unit = "";
};
