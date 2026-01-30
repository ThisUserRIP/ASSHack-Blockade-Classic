#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };

namespace mscorlib::System::Runtime::Remoting::Services
{
	struct ITrackingHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DisconnectedObject(mscorlib::System::Object* obj);
		void MarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_);
		void UnmarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_);
	};
}

