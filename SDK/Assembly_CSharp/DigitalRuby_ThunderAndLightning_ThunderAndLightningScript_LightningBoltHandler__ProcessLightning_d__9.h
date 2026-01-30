#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_ThunderAndLightningScript_LightningBoltHandler.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct ThunderAndLightningScript_LightningBoltHandler; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct ThunderAndLightningScript_LightningBoltHandler__ProcessLightning_d__9 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler* __4__this;
		bool intense;
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _start;
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _end;
		bool visible;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* _sounds_5__2;
		float _intensity_5__3;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

