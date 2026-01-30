#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Ionic_Zip::Ionic::Zlib
{
	struct InfTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* hn;
		IL2CPP::Array<int32_t>* v;
		IL2CPP::Array<int32_t>* c;
		IL2CPP::Array<int32_t>* r;
		IL2CPP::Array<int32_t>* u;
		IL2CPP::Array<int32_t>* x;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* fixed_tl;
			IL2CPP::Array<int32_t>* fixed_td;
			IL2CPP::Array<int32_t>* cplens;
			IL2CPP::Array<int32_t>* cplext;
			IL2CPP::Array<int32_t>* cpdist;
			IL2CPP::Array<int32_t>* cpdext;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t huft_build(IL2CPP::Array<int32_t>* b, int32_t bindex, int32_t n, int32_t s, IL2CPP::Array<int32_t>* d, IL2CPP::Array<int32_t>* e, IL2CPP::Array<int32_t>* t, IL2CPP::Array<int32_t>* m, IL2CPP::Array<int32_t>* hp, IL2CPP::Array<int32_t>* hn, IL2CPP::Array<int32_t>* v);
		int32_t inflate_trees_bits(IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bb, IL2CPP::Array<int32_t>* tb, IL2CPP::Array<int32_t>* hp, Ionic_Zip::Ionic::Zlib::ZlibCodec* z);
		int32_t inflate_trees_dynamic(int32_t nl, int32_t nd, IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<int32_t>* tl, IL2CPP::Array<int32_t>* td, IL2CPP::Array<int32_t>* hp, Ionic_Zip::Ionic::Zlib::ZlibCodec* z);
		static int32_t inflate_trees_fixed(IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<IL2CPP::Array<int32_t>*>* tl, IL2CPP::Array<IL2CPP::Array<int32_t>*>* td, Ionic_Zip::Ionic::Zlib::ZlibCodec* z);
		void initWorkArea(int32_t vsize);
		void _ctor();
		static void _cctor();
	};
}

