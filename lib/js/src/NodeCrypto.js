'use strict';

var $$Crypto = require("crypto");

function appendString(hmac, str) {
  hmac.update(str);
  
}

function appendBuffer(hmac, buffer) {
  hmac.update(buffer);
  
}

function toBase64(hmac) {
  return hmac.digest("base64");
}

function toBuffer(hmac) {
  return hmac.digest(undefined);
}

function Hmac_create(prim, prim$1) {
  return $$Crypto.createHmac((function () {
                  switch (prim) {
                    case "SHA256" :
                        return "sha256";
                    case "SHA512" :
                        return "sha512";
                    case "SHA384" :
                        return "sha384";
                    case "SHA1" :
                        return "sha1";
                    case "MD5" :
                        return "md5";
                    
                  }
                })(), prim$1);
}

var Hmac = {
  create: Hmac_create,
  appendString: appendString,
  appendBuffer: appendBuffer,
  toBase64: toBase64,
  toBuffer: toBuffer
};

function appendString$1(hmac, str) {
  hmac.update(str);
  
}

function appendBuffer$1(hmac, buffer) {
  hmac.update(buffer);
  
}

function toBase64$1(hmac) {
  return hmac.digest("base64");
}

function toBuffer$1(hmac) {
  return hmac.digest(undefined);
}

function Hash_create(prim) {
  return $$Crypto.createHash((function () {
                  switch (prim) {
                    case "SHA256" :
                        return "sha256";
                    case "SHA512" :
                        return "sha512";
                    case "SHA384" :
                        return "sha384";
                    case "SHA1" :
                        return "sha1";
                    case "MD5" :
                        return "md5";
                    
                  }
                })());
}

var Hash = {
  create: Hash_create,
  appendString: appendString$1,
  appendBuffer: appendBuffer$1,
  toBase64: toBase64$1,
  toBuffer: toBuffer$1
};

exports.Hmac = Hmac;
exports.Hash = Hash;
/* crypto Not a pure module */
