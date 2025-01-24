#include <stdio.h>

int main() {
    // HTML content to display
    const char *html_content =
        "<!DOCTYPE html>"
        "<html lang=\"en\">"
        "<head>"
        "    <meta charset=\"UTF-8\">"
        "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
        "    <title>Webhook Sender</title>"
        "    <style>"
        "        body {"
        "            font-family: Arial, sans-serif;"
        "            background-color: #f4f4f9;"
        "            color: #333;"
        "            margin: 0;"
        "            padding: 20px;"
        "        }"
        "        .message {"
        "            max-width: 600px;"
        "            margin: auto;"
        "            background: #fff;"
        "            padding: 20px;"
        "            border-radius: 8px;"
        "            box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);"
        "        }"
        "        h1 {"
        "            font-size: 24px;"
        "        }"
        "    </style>"
        "</head>"
        "<body>"
        "    <div class=\"message\">"
        "        <h1>Hey everyone!</h1>"
        "        <p>So this is a repository for a webhook sender that will also receive messages. It's still in alpha development btw.</p>"
        "        <p>The receiving feature doesn't work and is a placeholder. Anyways, that's all. :D</p>"
        "    </div>"
        "</body>"
        "</html>";

    // Print the HTML content to stdout
    printf("Content-Type: text/html\n\n");
    printf("%s", html_content);

    return 0;
}
