'use strict';

var Fs = require("fs");
var Jest = require("@glennsl/bs-jest/lib/js/src/jest.js");

Jest.describe("content", (function (param) {
        return Jest.test("non-zero length", (function (param) {
                      var filename = typeof __filename === "undefined" ? undefined : __filename;
                      return Jest.ExpectJs.toBeTruthy(Jest.ExpectJs.expect(filename !== undefined ? Fs.readFileSync(filename, "utf8").length : 0));
                    }));
      }));

/*  Not a pure module */
