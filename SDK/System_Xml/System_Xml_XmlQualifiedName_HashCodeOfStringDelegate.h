#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "System_Xml_XmlQualifiedName.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System_Xml::System::Xml
{
	struct XmlQualifiedName_HashCodeOfStringDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		int32_t Invoke(mscorlib::System::String* s, int32_t sLen, int64_t additionalEntropy);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::String* s, int32_t sLen, int64_t additionalEntropy, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		int32_t EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

