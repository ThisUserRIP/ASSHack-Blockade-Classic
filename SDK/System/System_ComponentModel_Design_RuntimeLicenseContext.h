#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_LicenseContext.h"
namespace System::System::Diagnostics { struct TraceSwitch; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel::Design
{
	struct RuntimeLicenseContext : System::ComponentModel::LicenseContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* savedLicenseKeys;
		struct StaticFields
		{
			System::Diagnostics::TraceSwitch* RuntimeLicenseContextSwitch;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* GetLocalPath(mscorlib::System::String* fileName);
		mscorlib::System::String* GetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::Reflection::Assembly* resourceAssembly);
		mscorlib::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(mscorlib::System::Reflection::Assembly* satellite, mscorlib::System::String* name);
		static mscorlib::System::IO::Stream* OpenRead(System::Uri* resourceUri);
		void _ctor();
		static void _cctor();
	};
}

