#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Utils_Classes_Data_TypeWrapper.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct TypeWrapper; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Rewired_Utils_Classes_Data_TypeWrapper_DataType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Utils::Classes
{
	struct SerializedMethod : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool fyyStySfHnECDRvJbMdBCmcjwWj;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper>* _data;
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper _result;
		bool _resultIsValid;
		struct StaticFields
		{
			int32_t SbeDOYlczTOedzvhgVLZczfOcHj;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType();
		int32_t get_DataCount();
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper get_Result();
		bool get_ResultIsValid();
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper GetData(int32_t index);
		void AddData(uint8_t item);
		void AddData(int8_t item);
		void AddData(wchar_t item);
		void AddData(int32_t item);
		void AddData(uint32_t item);
		void AddData(int64_t item);
		void AddData(uint64_t item);
		void AddData(float item);
		void AddData(double item);
		void AddData(bool item);
		void AddData(mscorlib::System::String* item);
		void AddData(mscorlib::System::Object* item);
		void AddData(Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper item);
		void ClearData();
		void ClearResult();
		bool Process();
		void aFUtFqseSJlqFJZKcihibrOgKjO();
		void _ctor();
	};
}

