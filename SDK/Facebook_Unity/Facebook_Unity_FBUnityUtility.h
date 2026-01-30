#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facebook_Unity::Facebook::Unity { struct IAsyncRequestStringWrapper; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FBUnityUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper* asyncRequestStringWrapper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper* get_AsyncRequestStringWrapper();
	};
}

