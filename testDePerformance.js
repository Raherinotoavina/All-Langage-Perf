const { performance } = require("perf_hooks");

const start = performance.now();

for (let i = 0; i < 1000000000;i++) "";

const end = performance.now();
console.log(`Execution time: ${(end - start)/1000} s`);