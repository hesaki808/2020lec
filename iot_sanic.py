#config: utf-8

from sanic import Sanic
from sanic.response import json

app = Sanic(__name__)

@app.route('/')
async def test(request):
    return json({"sanic":"scatting."})

@app.route('/api/id/<val>')
async def val(request, val):
    return json({'recv':val})

if __name__ == "__main__":
    app.run(host = "0.0.0.0", port = 8080, ssl = None, access_log = False)

