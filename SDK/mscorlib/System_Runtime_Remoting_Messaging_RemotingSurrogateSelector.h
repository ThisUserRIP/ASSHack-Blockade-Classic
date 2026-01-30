#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ObjRefSurrogate; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct RemotingSurrogate; };
namespace mscorlib::System::Runtime::Serialization { struct ISurrogateSelector; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct ISerializationSurrogate; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct RemotingSurrogateSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::ISurrogateSelector* _next;
		struct StaticFields
		{
			mscorlib::System::Type* s_cachedTypeObjRef;
			mscorlib::System::Runtime::Remoting::Messaging::ObjRefSurrogate* _objRefSurrogate;
			mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogate* _objRemotingSurrogate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector& ssout);
		static void _cctor();
	};
}

