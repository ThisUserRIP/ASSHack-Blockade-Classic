#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct ScreenSplash; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Crosshit : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::ScreenSplash>* Splashes;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* SplashesToDelete;
		UnityEngine_CoreModule::UnityEngine::Texture* texhit;
		UnityEngine_CoreModule::UnityEngine::Texture* SpecDamag;
		float HitTime;
		float FireHitTime;
		float GazHitTime;
		UnityEngine_CoreModule::UnityEngine::Texture* indicatorGas;
		UnityEngine_CoreModule::UnityEngine::Texture* indicatorFire;
		float a;
		UnityEngine_CoreModule::UnityEngine::Color c;
		void Awake();
		void OnGUI();
		void Hit();
		void FireHit();
		void GazHit();
		void SnowHit();
		void _ctor();
	};
}

