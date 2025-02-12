package tree_sitter_nba_playbook_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nba_playbook "github.com/tree-sitter/tree-sitter-nba_playbook/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nba_playbook.Language())
	if language == nil {
		t.Errorf("Error loading NbaPlaybook grammar")
	}
}
