#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "GUIGS.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "TWEEN_TYPE.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "OFFSET_TYPE.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TweenButton : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::GUIGS myGUIGS;
		UnityEngine_CoreModule::UnityEngine::Vector2 myOffset;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::TWEEN_TYPE>* tt;
		float tween_scale;
		UnityEngine_CoreModule::UnityEngine::Texture2D* background;
		UnityEngine_CoreModule::UnityEngine::Texture2D* primary;
		UnityEngine_CoreModule::UnityEngine::Texture2D* secondary;
		UnityEngine_CoreModule::UnityEngine::Texture2D* selected;
		bool isSelected;
		UnityEngine_AudioModule::UnityEngine::AudioClip* hover_melody;
		UnityEngine_AudioModule::UnityEngine::AudioClip* press_melody;
		UnityEngine_AudioModule::UnityEngine::AudioSource* AS;
		float hover_melody_prepause;
		float myWidth;
		float myHeight;
		float orgWidth;
		float orgHeight;
		float myAngle;
		int32_t rotateSpeed;
		float a;
		bool draw;
		UnityEngine_CoreModule::UnityEngine::Rect buttonRect;
		Assembly_CSharp::OFFSET_TYPE offset_type;
		float mute_time;
		bool played;
		bool forceHover;
		bool useScaleFix;
		int32_t coeff;
		void _ctor(Assembly_CSharp::GUIGS _guigs, UnityEngine_CoreModule::UnityEngine::Vector2 _myOffset, Assembly_CSharp::OFFSET_TYPE _offset_type, UnityEngine_CoreModule::UnityEngine::Texture2D* _primary, UnityEngine_CoreModule::UnityEngine::Texture2D* _background, UnityEngine_CoreModule::UnityEngine::Texture2D* _secondary, UnityEngine_CoreModule::UnityEngine::Texture2D* _selected, UnityEngine_AudioModule::UnityEngine::AudioClip* _hover_melody, UnityEngine_AudioModule::UnityEngine::AudioClip* _press_melody, UnityEngine_AudioModule::UnityEngine::AudioSource* _AS, float _hover_melody_prepause, float _tween_scale, int32_t _rotate_speed, float _org_width, float _org_height, float _force_angle);
		bool DrawButton(UnityEngine_CoreModule::UnityEngine::Vector2 mpos, UnityEngine_CoreModule::UnityEngine::Vector2 newPos);
		void Tween(bool hover, UnityEngine_CoreModule::UnityEngine::Vector2 newPos);
		void BiggerTween(bool hover);
		void RotateTween(bool hover);
		void GlowTween(bool hover);
		void DropSize();
		void GO();
	};
}

