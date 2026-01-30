#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_ReadOnlyCollectionBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Diagnostics { struct ProcessModule; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Diagnostics
{
	struct ProcessModuleCollection : mscorlib::System::Collections::ReadOnlyCollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(IL2CPP::Array<System::Diagnostics::ProcessModule*>* processModules);
		System::Diagnostics::ProcessModule* get_Item(int32_t index);
	};
}

