open Belt.Option;
open Express;
open Extern;

let port = getWithDefault(portEnv, "4001");

let app = express();

let http = Http.create(app);

App.get(app, ~path="/") @@
Middleware.from((_, _) => Response.sendString("<h1>HELLO, REASON</h1>"));

Http.listen(http, port |> int_of_string, () =>
  print_endline("Listening at *:" ++ port)
);


