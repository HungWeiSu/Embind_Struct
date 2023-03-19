@echo off
echo Starting Python http.server on port 8000...
start python -m http.server 8000
echo Server started. Opening http://localhost:8000
start http://localhost:8000