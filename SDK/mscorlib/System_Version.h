#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct Version_VersionResult; };
namespace mscorlib::System { struct Version_VersionResult; };

namespace mscorlib::System
{
	struct Version : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _Major;
		int32_t _Minor;
		int32_t _Build;
		int32_t _Revision;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* SeparatorsArray;
			int32_t ZERO_CHAR_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t major, int32_t minor, int32_t build, int32_t revision);
		void _ctor(int32_t major, int32_t minor, int32_t build);
		void _ctor(int32_t major, int32_t minor);
		void _ctor(mscorlib::System::String* version);
		void _ctor();
		int32_t get_Major();
		int32_t get_Minor();
		int32_t get_Build();
		int32_t get_Revision();
		mscorlib::System::Object* Clone();
		int32_t CompareTo(mscorlib::System::Object* version);
		int32_t CompareTo(mscorlib::System::Version* value);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::Version* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(int32_t fieldCount);
		static void AppendPositiveNumber(int32_t num, mscorlib::System::Text::StringBuilder* sb);
		static mscorlib::System::Version* Parse(mscorlib::System::String* input);
		static bool TryParseVersion(mscorlib::System::String* version, mscorlib::System::Version_VersionResult& result);
		static bool TryParseComponent(mscorlib::System::String* component, mscorlib::System::String* componentName, mscorlib::System::Version_VersionResult& result, int32_t& parsedComponent);
		static bool op_Equality(mscorlib::System::Version* v1, mscorlib::System::Version* v2);
		static bool op_Inequality(mscorlib::System::Version* v1, mscorlib::System::Version* v2);
		static bool op_LessThan(mscorlib::System::Version* v1, mscorlib::System::Version* v2);
		static void _cctor();
	};
	bool operator==(mscorlib::System::Version& v1, mscorlib::System::Version& v2);
	bool operator!=(mscorlib::System::Version& v1, mscorlib::System::Version& v2);
	bool operator<(mscorlib::System::Version& v1, mscorlib::System::Version& v2);
}

