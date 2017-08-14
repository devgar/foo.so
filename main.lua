function love.load()
  --require("libfoo.so")
  sound = love.audio.newSource("music.ogg")
  love.audio.play(sound)
end

function love.draw()
  love.graphics.print("Hello World", 400, 300)
end
