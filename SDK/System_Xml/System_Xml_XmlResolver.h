#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlResolver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* GetEntity(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn);
		System::System::Uri* ResolveUri(System::System::Uri* baseUri, mscorlib::System::String* relativeUri);
		bool SupportsType(System::System::Uri* absoluteUri, mscorlib::System::Type* type);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Object>* GetEntityAsync(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn);
		void _ctor();
	};
}

