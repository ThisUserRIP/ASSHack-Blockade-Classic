#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_ProcessWindowStyle.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Security { struct SecureString; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct WeakReference; };
namespace System::System::Collections::Specialized { struct StringDictionary; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Diagnostics
{
	struct ProcessStartInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* fileName;
		mscorlib::System::String* arguments;
		mscorlib::System::String* directory;
		mscorlib::System::String* verb;
		System::Diagnostics::ProcessWindowStyle windowStyle;
		bool errorDialog;
		intptr_t errorDialogParentHandle;
		bool useShellExecute;
		mscorlib::System::String* userName;
		mscorlib::System::String* domain;
		mscorlib::System::Security::SecureString* password;
		mscorlib::System::String* passwordInClearText;
		bool loadUserProfile;
		bool redirectStandardInput;
		bool redirectStandardOutput;
		bool redirectStandardError;
		mscorlib::System::Text::Encoding* standardOutputEncoding;
		mscorlib::System::Text::Encoding* standardErrorEncoding;
		bool createNoWindow;
		mscorlib::System::WeakReference* weakParentProcess;
		System::Collections::Specialized::StringDictionary* environmentVariables;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* environment;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

