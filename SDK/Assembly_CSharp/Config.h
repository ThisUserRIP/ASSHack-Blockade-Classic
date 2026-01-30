#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Resolution.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Resolution; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Config : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Resolution>* res;
			float Sensitivity;
			int32_t Dlight;
			int32_t Fscreen;
			int32_t Tileset;
			int32_t respos;
			int32_t distpos;
			float menuvolume;
			float gamevolume;
			bool chat_filter;
			int32_t dot;
			int32_t cross;
			float crossR;
			float crossG;
			float crossB;
			int32_t damagePopups;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Init();
		static void SaveChatFilter();
		static void ResetResolutions();
		static void ChangeMode();
		void _ctor();
		static void _cctor();
	};
}

