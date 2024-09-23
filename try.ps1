

param([string]$Message = "")

try {
	if ($Message -eq "" ) { $URL = read-host "Enter alert message" }

	echo "ALERT: $Message"

	curl --header "Access-Token: o.PZl5XCp6SBl4F5PpaNXGDfFpUJZKAlEb" --header "Content-Type: application/json" --data-binary '{"type": "note", "title": "ALERT", "body": "$Message"}' --request POST https://api.pushbullet.com/v2/pushes

	exit 0 # success
} catch {
	"⚠️ Error in line $($_.InvocationInfo.ScriptLineNumber): $($Error[0])"
	exit 1
}
