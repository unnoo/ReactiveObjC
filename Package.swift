// swift-tools-version:5.0
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "ReactiveObjC",
    platforms: [
        .macOS(.v10_11),
        .iOS(.v9),
        .tvOS(.v9)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "ReactiveObjC",
            targets: ["ReactiveObjC"])
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "ReactiveObjC",
            path: ".",
            exclude: ["ReactiveObjC/Deprecations+Removals.swift"],
            sources: ["ReactiveObjC"],
            publicHeadersPath: "modulemap",
            cSettings: [
                .headerSearchPath("."),
                .define("DTRACE_PROBES_DISABLED")
            ]
        )
    ],
    cxxLanguageStandard: .gnucxx14
)
