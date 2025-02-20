#!/usr/bin/perl
use strict;
use warnings;

# Open a file for reading
open(my $fh, '<', 'example.txt') or die "Cannot open file: $!";

# Read the file line by line
while (my $line = <$fh>) {
    print $line;
}

# Close the file handle
close($fh);
