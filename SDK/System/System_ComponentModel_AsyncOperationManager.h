#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct AsyncOperation; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct AsyncOperationManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static System::ComponentModel::AsyncOperation* CreateOperation(mscorlib::System::Object* userSuppliedState);
		static mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContext();
		static void set_SynchronizationContext(mscorlib::System::Threading::SynchronizationContext* value);
	};
}

