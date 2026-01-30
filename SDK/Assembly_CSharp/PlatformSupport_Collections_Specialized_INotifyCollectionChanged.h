#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::PlatformSupport::Collections::Specialized { struct NotifyCollectionChangedEventHandler; };

namespace Assembly_CSharp::PlatformSupport::Collections::Specialized
{
	struct INotifyCollectionChanged
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void add_CollectionChanged(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler* value);
		void remove_CollectionChanged(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler* value);
	};
}

