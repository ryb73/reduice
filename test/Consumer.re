open Promise;

Dependent.go("yes")
    |> then_((v) => {
        Js.log2("success?", v);
        resolve();
    });