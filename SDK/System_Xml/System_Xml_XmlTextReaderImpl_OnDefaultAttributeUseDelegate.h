#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System_Xml::System::Xml { struct IDtdDefaultAttributeInfo; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_OnDefaultAttributeUseDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(System_Xml::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, System_Xml::System::Xml::XmlTextReaderImpl* coreReader);
		mscorlib::System::IAsyncResult* BeginInvoke(System_Xml::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, System_Xml::System::Xml::XmlTextReaderImpl* coreReader, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

