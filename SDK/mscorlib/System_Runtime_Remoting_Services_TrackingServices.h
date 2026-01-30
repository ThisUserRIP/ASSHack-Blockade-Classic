#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };

namespace mscorlib::System::Runtime::Remoting::Services
{
	struct TrackingServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::ArrayList* _handlers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void NotifyMarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_);
		static void NotifyUnmarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_);
		static void NotifyDisconnectedObject(mscorlib::System::Object* obj);
		static void _cctor();
	};
}

