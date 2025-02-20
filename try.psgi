use strict;
use warnings;
use Plack::Request;

# Simple PSGI application
my $app = sub {
    my $env = shift;  # PSGI environment
    my $req = Plack::Request->new($env);  # Create a request object

    # Return an HTML response
    return [
        200,  # HTTP Status Code
        ['Content-Type' => 'text/html'],  # Content-Type header for HTML
        [
            '<html>',
            '<head><title>PSGI Example</title></head>',
            '<body>',
            '<h1>Welcome to my PSGI application!</h1>',
            '<p>This is a simple response with HTML content.</p>',
            '</body>',
            '</html>'
        ]
    ];
};

# Return the application
return $app;
