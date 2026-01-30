#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct CompareInfo; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IEnumerable; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	struct Platform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Globalization::CompareInfo* InvariantCompareInfo;
			mscorlib::System::String* NewLine;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetNewLine();
		static bool EqualsIgnoreCase(mscorlib::System::String* a, mscorlib::System::String* b);
		static mscorlib::System::String* GetEnvironmentVariable(mscorlib::System::String* variable);
		static mscorlib::System::Exception* CreateNotImplementedException(mscorlib::System::String* message);
		static mscorlib::System::Collections::IList* CreateArrayList();
		static mscorlib::System::Collections::IList* CreateArrayList(int32_t capacity);
		static mscorlib::System::Collections::IList* CreateArrayList(mscorlib::System::Collections::ICollection* collection);
		static mscorlib::System::Collections::IList* CreateArrayList(mscorlib::System::Collections::IEnumerable* collection);
		static mscorlib::System::Collections::IDictionary* CreateHashtable();
		static mscorlib::System::Collections::IDictionary* CreateHashtable(int32_t capacity);
		static mscorlib::System::Collections::IDictionary* CreateHashtable(mscorlib::System::Collections::IDictionary* dictionary);
		static mscorlib::System::String* ToLowerInvariant(mscorlib::System::String* s);
		static mscorlib::System::String* ToUpperInvariant(mscorlib::System::String* s);
		static void Dispose(mscorlib::System::IO::Stream* s);
		static void Dispose(mscorlib::System::IO::TextWriter* t);
		static int32_t IndexOf(mscorlib::System::String* source, mscorlib::System::String* value);
		static int32_t LastIndexOf(mscorlib::System::String* source, mscorlib::System::String* value);
		static bool StartsWith(mscorlib::System::String* source, mscorlib::System::String* prefix);
		static bool EndsWith(mscorlib::System::String* source, mscorlib::System::String* suffix);
		static mscorlib::System::String* GetTypeName(mscorlib::System::Object* obj);
		void _ctor();
		static void _cctor();
	};
}

