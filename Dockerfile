FROM python:3.13-slim AS builder

# Install build dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    gcc-mingw-w64-x86-64 \
    binutils-mingw-w64-x86-64 \
    && rm -rf /var/lib/apt/lists/*

# Final minimal image
FROM python:3.13-slim

# Install only runtime dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    gcc-mingw-w64-x86-64 \
    binutils-mingw-w64-x86-64 \
    zlib1g-dev \
    libz-mingw-w64-dev \
    binutils \
    icoutils \
    && rm -rf /var/lib/apt/lists/* \
    && apt-get clean \
    && pip install pefile

# Set working directory
WORKDIR /app

# Copy application files
COPY . .

# Set environment variables
ENV PYTHONUNBUFFERED=1
ENV PYTHONDONTWRITEBYTECODE=1

# Default command
CMD ["python3", "main.py", "--help"]
