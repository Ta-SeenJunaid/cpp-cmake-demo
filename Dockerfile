FROM ubuntu:22.04

# Install build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    ninja-build \
    && rm -rf /var/lib/apt/lists/*

# Project root inside container
WORKDIR /app

# Copy everything except what .dockerignore excludes
COPY . .

# Build
RUN cmake -B build -G Ninja \
 && cmake --build build

# Run the app
CMD ["./build/src/app/app"]
