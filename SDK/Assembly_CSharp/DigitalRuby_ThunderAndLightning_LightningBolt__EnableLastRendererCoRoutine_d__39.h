#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_LightningBolt.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt_LineRendererMesh; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBolt__EnableLastRendererCoRoutine_d__39 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* __4__this;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh* _lineRenderer_5__2;
		int32_t _tag_5__3;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

