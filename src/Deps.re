let promise : ref(option(module Types.Promise)) = ref(None);

let registerPromise = (p) =>
    switch (promise^) {
        | None => promise := Some(p);
        | _ => failwith("Promise module already registered")
    };

let getPromise = () =>
    switch(promise^) {
        | Some(p) => p
        | None => (module Js.Promise)
    };
