/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021-2022 c2eo team
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef PROJECT_SRC_TRANSPILER_ANALYZERS_H_
#define PROJECT_SRC_TRANSPILER_ANALYZERS_H_

#include "src/transpiler/enumdecl.h"
#include "src/transpiler/recorddecl.h"
#include "src/transpiler/vardecl.h"

//------------------------------------------------------------------------------
class FuncDeclAnalyzer
    : public clang::ast_matchers::MatchFinder::MatchCallback {
 public:
  __attribute__((unused)) static bool AreSameVariable(
      const clang::ValueDecl *first, const clang::ValueDecl *second) {
    return (first != nullptr) && (second != nullptr) &&
           first->getCanonicalDecl() == second->getCanonicalDecl();
  }

  void run(
      const clang::ast_matchers::MatchFinder::MatchResult &result) override;
};

//------------------------------------------------------------------------------
class RecordDeclAnalyzer
    : public clang::ast_matchers::MatchFinder::MatchCallback {
 public:
  __attribute__((unused)) static bool AreSameVariable(
      const clang::ValueDecl *first, const clang::ValueDecl *second) {
    return (first != nullptr) && (second != nullptr) &&
           first->getCanonicalDecl() == second->getCanonicalDecl();
  }

  void run(
      const clang::ast_matchers::MatchFinder::MatchResult &result) override;
};

//------------------------------------------------------------------------------
class DeclBaseVarGlobalMemoryAnalyzer
    : public clang::ast_matchers::MatchFinder::MatchCallback {
 public:
  __attribute__((unused)) static bool AreSameVariable(
      const clang::ValueDecl *first, const clang::ValueDecl *second) {
    return (first != nullptr) && (second != nullptr) &&
           first->getCanonicalDecl() == second->getCanonicalDecl();
  }

  void run(
      const clang::ast_matchers::MatchFinder::MatchResult &result) override;
};

#endif  // PROJECT_SRC_TRANSPILER_ANALYZERS_H_
class EnumDeclAnalyzer
    : public clang::ast_matchers::MatchFinder::MatchCallback {
 public:
  __attribute__((unused)) static bool AreSameVariable(
      const clang::ValueDecl *first, const clang::ValueDecl *second) {
    return (first != nullptr) && (second != nullptr) &&
           first->getCanonicalDecl() == second->getCanonicalDecl();
  }

  void run(
      const clang::ast_matchers::MatchFinder::MatchResult &result) override;
};

#endif  // C2EO_SRC_TRANSPILER_ANALYZERS_H_
