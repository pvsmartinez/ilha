package core;

import openfl.media.Sound;
import openfl.media.SoundTransform;
import openfl.media.SoundChannel;
import core.Rs;

class SoundHandler{

  private static var currentMusic:String = "";
  private static var isMusicPlaying:Bool = false;
  private static var musicChannel:SoundChannel;
  private static var fxTransform:SoundTransform;

  public function init() {
    fxTransform = new SoundTransform(0.8, 0);
    musicChannel.soundTransform = new SoundTransform(0.8, 0);
  }

  public static function playSound(soundID: String){
    if(Rs.sounds.exists(soundID)){
      //Rs.sounds[soundID].play(0, 1, fxTransform);
    }
    else{
      trace("The sound ID " + soundID + " is not set.");
    }
  }

  public static function randomSoundFromList(soundList:Array<String>, probList:Array<Int>):Void{
    var probSum:Int = 0;

    var pickedNumber = Std.random(100);

    if(soundList.length != probList.length){
      trace("Sound list and probability list of diferent sizes");
      return;
    }
    else{
      for(idx in 0...soundList.length){
        probSum = probSum + probList[idx];
        if(pickedNumber < probSum){
          playSound(soundList[idx]);
          break;
        }
      }
    }
    return;
  }

  public static function setAndPlayMusic(musicID:String) {
    if(Rs.musics.exists(musicID) && (musicID != currentMusic && isMusicPlaying == false)){
      currentMusic = musicID;
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
    isMusicPlaying = false;
    musicChannel.stop();
  }
}
