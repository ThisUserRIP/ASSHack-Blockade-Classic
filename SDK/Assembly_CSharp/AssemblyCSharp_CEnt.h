#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "ENTITY.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::AssemblyCSharp
{
	struct CEnt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t uid;
		int32_t index;
		UnityEngine_CoreModule::UnityEngine::GameObject* go;
		bool Active;
		mscorlib::System::String* classname;
		Assembly_CSharp::ENTITY classID;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Vector3 rotation;
		int32_t team;
		int32_t skin;
		int32_t ownerID;
		void _ctor();
		void Finalize();
		void SetActive(bool val);
	};
}

