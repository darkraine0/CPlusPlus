{ pkgs }: {
	deps = [
   pkgs.google-cloud-sdk-gce
   pkgs.nodePackages.prettier
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}