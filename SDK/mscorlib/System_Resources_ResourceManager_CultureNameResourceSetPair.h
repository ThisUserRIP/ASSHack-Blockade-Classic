#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Resources_ResourceManager.h"
namespace mscorlib::System::Resources { struct ResourceManager; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Resources { struct ResourceSet; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Resources
{
	struct ResourceManager_CultureNameResourceSetPair : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* lastCultureName;
		mscorlib::System::Resources::ResourceSet* lastResourceSet;
		void _ctor();
	};
}

