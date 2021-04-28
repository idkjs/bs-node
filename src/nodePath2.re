/* Copyright (C) 2015-2016 Bloomberg Finance L.P.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * In addition to the permissions granted to you by the LGPL, you may combine
 * or link a "work that uses the Library" with a publicly distributed version
 * of this file to produce a combined library or application, then distribute
 * that combined work under the terms of your choosing, with no requirement
 * to comply with the obligations normally placed on you by section 4 of the
 * LGPL version 3 (or the corresponding section of a later version of the LGPL
 * should you choose to use a later version).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. */

[@bs.module "path"] external basename: string => string = "basename";
[@bs.module "path"]
external basenameExt: (~path: string, ~ext: string) => string = "basename";

[@bs.module "path"] external delimiter: string = "delimiter";

[@bs.module "path"] external dirname: string => string = "dirname";
type pathObject ={
          dir : string ,
          root : string ,
          base : string ,
          name : string ,
          ext : string
};


[@bs.module "path"] external format: pathObject => string = "format";
[@bs.module "path"] external isAbsolute: string => bool = "isAbsolute";

/* TODO: improve after we support [@bs.rest] calling convention  */
[@bs.module "path"] external join2: (string, string) => string = "join";

[@bs.module "path"] [@bs.splice]
external join: array(string) => string = "join";

[@bs.module "path"] external normalize: string => string = "normalize";

/* TODO: check if there is an exception raised */
[@bs.module "path"] external parse: string => pathObject = "parse";
/* TODO: provide bindings to [path.posix]*/

[@bs.module "path"]
external relative: (~from: string, ~to_: string, unit) => string = "relative";

[@bs.module "path"] [@bs.splice]
external resolve: array(string) => string = "resolve";

[@bs.module "path"] external sep: string = "sep";

/* TODO: provides [path.win32] */
