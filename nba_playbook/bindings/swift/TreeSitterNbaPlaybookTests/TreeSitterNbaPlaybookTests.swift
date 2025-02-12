import XCTest
import SwiftTreeSitter
import TreeSitterNbaPlaybook

final class TreeSitterNbaPlaybookTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nba_playbook())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading NbaPlaybook grammar")
    }
}
