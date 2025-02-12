// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterNbaPlaybook",
    products: [
        .library(name: "TreeSitterNbaPlaybook", targets: ["TreeSitterNbaPlaybook"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterNbaPlaybook",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterNbaPlaybookTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterNbaPlaybook",
            ],
            path: "bindings/swift/TreeSitterNbaPlaybookTests"
        )
    ],
    cLanguageStandard: .c11
)
