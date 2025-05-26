import requests
import time

image_url = 'https://popbabble.files.wordpress.com/2016/07/very-young-david-hasselhoff.jpg?resize=400%2C616'
output_file = 'fotka.png'

try:
    response = requests.get(image_url, stream=True)
    response.raise_for_status()

    with open(output_file, 'wb') as f:
        for chunk in response.iter_content(chunk_size=1024):
            if chunk:
                f.write(chunk)

except requests.exceptions.RequestException as e:
    print(f"Błąd podczas pobierania obrazu: {e}")

time.sleep(1.5)
