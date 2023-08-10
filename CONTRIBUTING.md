# Contributing

*For basic contribution information, refer to the
[main "Contributing" document][main].*

Remember to follow the general structure and style of the repository.

* New subcommands should have a function added in [`cmd.h`][cmdh] and a
    corresponding file in the [cmd](cmddir) directory.
* Feel free to use new C features. Although the app currently targets C11, it
    may upgrade if so is needed.
* Avoid preprocessor magic. We compile with clang rather than force using GCC
    on Linuxes or MSVC on Windows. You can try mangling the code to compile
    under other compilers, but clang is a nice middleground for a small app.
* Follow semantic versioning. You should increase the major version when a
    command's syntax changes so much, the previous syntax is no longer valid
    after the update. Adding new options to existing commands is not a major
    update. More information can be found on the [SemVer website][semver].
* Use [gitmoji][gitmoji] in your commit messages.

[cmdh]: include/cmd.h
[cmddir]: src/ddd/cmd/

[semver]: https://semver.org/

[gitmoji]: https://gitmoji.dev/

[main]: https://github.com/qeaml/qeaml/blob/main/CONTRIBUTING.md
