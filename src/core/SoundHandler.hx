package core;

import openfl.media.Sound;
import openfl.media.SoundTransform;
import openfl.media.SoundChannel;
import core.Rs;

class SoundHandler{

  private static var musicChannel:SoundChannel;
  private static var fxTransform:SoundTransform;

  public function init() {
    fxTransform = new SoundTransform(1, 0);
    musicChannel.soundTransform = new SoundTransform(1, 0);
  }

  public static function playSound(soundID: String){
    if(Rs.sounds.exists(soundID)){
      Rs.sounds[soundID].play(0, 1, fxTransform);
    }
    else{
      trace("The sound ID " + soundID + " is not set.");
    }
  }

  public static function setAndPlayMusic(musicID:String) {
    if(Rs.musics.exists(musicID)){
      musicChannel = Rs.musics[musicID].play();
    }
    else{
      trace("The music ID " + musicID + " is not set.");
    }
  }

  public static function setMusicVolume(volume:Float) {
    musicChannel.soundTransform = new SoundTransform(volume, 0);
  }
  public static function setFxVolume(volume:Float) {
    fxTransform = new SoundTransform(volume, 0);
  }

  public static function stopMusic() {
    musicChannel.stop();
  }
}
