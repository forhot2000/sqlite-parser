#include "thirdparty/microtest/microtest.h"

#include <iostream>
#include <map>
#include <string>

#include "sql_asserts.h"
#include "SQLParser.h"
#include "parser/bison_parser.h"

using namespace hsql;

void test_tokens(const std::string& query, const std::vector<int16_t>& expected_tokens) {
  std::vector<int16_t> tokens;
  ASSERT(SQLParser::tokenize(query, &tokens));

  ASSERT_EQ(expected_tokens.size(), tokens.size());

  for (unsigned i = 0; i < expected_tokens.size(); ++i) {
    ASSERT_EQ(expected_tokens[i], tokens[i]);
  }
}

TEST(SQLParserTokenizeTest) {
  test_tokens("SELECT * FROM test;", { SQL_SELECT, '*', SQL_FROM, SQL_IDENTIFIER, ';' });
}

TEST(SQLParserTokenizeStringifyTest) {
  const std::string query = "SELECT * FROM test;";
  std::vector<int16_t> tokens;
  ASSERT(SQLParser::tokenize(query, &tokens));

  // Make u16string.
  std::u16string token_string(tokens.cbegin(), tokens.cend());

  // Check if u16 string is cacheable.
  std::map<std::u16string, std::string> cache;
  cache[token_string] = query;

  ASSERT(query == cache[token_string]);
  ASSERT(&query != &cache[token_string]);
}

