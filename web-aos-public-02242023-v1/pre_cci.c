# 1 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

# 1 "Action.c" 1
Action()
{

	int i;
	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_start_transaction("trx_Landing_Page");
	
	web_url("advantageonlineshopping.com", 
		"URL=http://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/main.min.js", "ENDITEM", 
		"Url=/services.properties", "ENDITEM", 
		"Url=/css/images/closeDark.png", "ENDITEM", 
		"Url=/css/images/logo.png", "ENDITEM", 
		"Url=https://www.google-analytics.com/analytics.js", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=tablets", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=laptops", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=speakers", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=mice", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=headphones", "ENDITEM", 
		"Url=/css/images/GoUp.png", "ENDITEM", 
		"Url=/css/images/Special-offer.jpg", "ENDITEM", 
		"Url=/css/images/facebook.png", "ENDITEM", 
		"Url=/css/images/twitter.png", "ENDITEM", 
		"Url=/css/images/linkedin.png", "ENDITEM", 
		"Url=/css/images/Banner1.jpg", "ENDITEM", 
		"Url=/css/images/Banner2.jpg", "ENDITEM", 
		"Url=/css/images/Banner3.jpg", "ENDITEM", 
		"Url=/css/images/Popular-item2.jpg", "ENDITEM", 
		"Url=/css/images/Popular-item3.jpg", "ENDITEM", 
		"Url=/css/images/Popular-item1.jpg", "ENDITEM", 
		"Url=/css/images/category_banner_4.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4300", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4200", "ENDITEM", 
		"Url=/css/images/Filter.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4600", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4700", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4400", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4100", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4500", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4101", "ENDITEM", 
		"Url=/css/images/category_banner_3.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3200", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3100", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3300", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3103", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3102", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=3101", "ENDITEM", 
		"Url=/css/videos/13543361_299823923688824_1410005144_n.mp4", "ENDITEM", 
		"Url=/css/images/category_banner_1.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1249", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1700", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1250", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1600", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1100", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=11100", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1300", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1200", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1245", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1400", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=1800", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=2200", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5400", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5900", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5300", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5200", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5700", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5800", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5505", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5600", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=5100", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("__Host-GAPS=1:Vo-47M4wYJaBq-BRZ_8xT-wM39gClw:rsjZhDesSiSbxsiw; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=ARSKqsLcERO8ewSmToVa1q60rJazSNjtziHxi0Y803ybRLnB3Irvrvmu0Q; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2023-02-24-19; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=iR7_gFIeXp4YgoyvTgEn8cwph_Hg_kImB4WGv9GI1E9SmoW5PbRHCw7pOoJ2qy8CF69vs9Wik-t4Cc_isLni0QHGUSvfWow-4hwooOs5ztX1rCOrmR8sHPYCXgXDBaQbChQyX7BVTQNSeRtdwWzH27z6Lg4D7VoaEQnmaSutX94; DOMAIN=accounts.google.com");

	lr_think_time(4);

	 
# 120 "Action.c"
	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTEwLjAuNTQ4MS4xMDUSJQmFBxXK5HnC-BIFDeeNQA4SBQ3OQUx6EgUNeG8SGRIFDQ8Wvis=?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("collect",
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j99&a=1945520715&t=pageview&_s=1&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1920x937&je=0&_u=IEBAAEABAAAAACAAI~&jid=398906760&gjid=901649059&cid=2026495771.1677273847&tid=UA-81334227-1&_gid=785204948.1677273847&_r=1&_slc=1&z=778306008",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=http://advantageonlineshopping.com/",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"LAST");

	web_url("categories", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga=GA1.2.2026495771.1677273847; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.785204948.1677273847; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=advantageonlineshopping.com");

	web_url("search", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("popularProducts.json", 
		"URL=http://advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("home-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/images/arrow_right.png", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	lr_think_time(12);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:EFazwHe14-p1LjLaEQFjsN2O9aGAXz1krvM_LV19iYM&cup2hreq=48915ef778dab04ae58d3d2f84728c9117f2461e85a852f1fe7a6a2bd2bc6a8f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\""
		"{31613359-0419-432e-a735-c3e78f54b75c}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1:1bk9:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"4.10.2557.0 for Chrome 95+\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{fb05c3b1-8d39-46c0-9840-0ca0f9d2b58f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{effe76bc-ef54-4e93-81c2-03b3c5c86efe}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\""
		"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2f05b93b17882f6d46c35c7f6f7f9f90d7a34f888f796446d9b587e09c1987e8\"}]},\"ping\":{\"ping_freshness\":\"{b9865632-fca8-4e15-8c76-b316eb0df02f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"9.43.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4d3d17300165ac9941be6006036ac2f7a2abdba541ce92a657141d4915019748\"}]},\"ping\":{\"ping_freshness\":\"{b08bd2db-e8d4-4343-ab7c-49c8d317dd41}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"20230204.507919928\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.51fdc8ed675d4e178328663acfdb041f18d3e0a2a05f6cb7c6fc9f602f15efcc\"}]},\"ping\":{\"ping_freshness\":\"{1726d5b8-289b-464d-b49e-c9156e1347f4}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"380\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{953e14c2-8c80-4392-a2db-386a9bf6870f}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4d4a9ece68f12d31fb4ebe458e7cbbce6bd27a5d363bce3344b1f4b5c6b024b4\"}]},\""
		"ping\":{\"ping_freshness\":\"{ee0b052f-8bd0-4b0b-85b8-c42bed3ac7ee}\",\"rd\":5898},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"58\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a95c9483e49c8e8f5c5276ac9894c96998014bbe088ffe2256a7fef4b21781f4\"}]},\"ping\":{\"ping_freshness\":\""
		"{20357534-a72d-42f7-abdf-a829f75f5ae7}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"7876\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{d68ac705-da0f-4866-81e2-9fe51d06ce78}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{bf52a66e-deb3-434e-8479-c1a2e2cda6aa}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEA\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5810,\""
		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f01de52469688ae15bd4cc6e43e5fd0ae8a80d4bd6954967fd4f499c7507aa2e\"}]},\"ping\":{\"ping_freshness\":\"{c045226e-7e35-49e6-8f8e-bfec264830c2}\",\"rd\":5898},\"tag\":\"stable\",\"updatecheck\":{},\"version\":\"107.294.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{5a6ab2dc-54bd-4bce-b897-98f64a7cb96a}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fe129492bb78119169580e6878c436e9a54ac5faeb9ddba782c5cee95a6eef04\"}]},\"ping\":{\"ping_freshness\":\"{bff402be-ab18-4ec2-aa6a-efad937554a5}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"510\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.938942640594fc606d1393c429930a29876f01c30ac2b21b7aa723292566b2f0\"}]},\""
		"ping\":{\"ping_freshness\":\"{9d5be85a-ed03-46f8-bc51-60daced7ff27}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2926\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9/1a0f:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\""
		"{76df96f3-0a3d-45ce-b428-f46585872e46}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8cded944b69179992f673974ae964ce7592d6ec63c5bf08aaa2ad166702f8b95\"}]},\"ping\":{\"ping_freshness\":\"{538ecb8e-b818-4e9a-b81e-7c791d4cfaa4}\",\"rd\":5898},\""
		"updatecheck\":{},\"version\":\"112.0.5614.0\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"GCEA\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{450d1437-e5dd-4269-8c75-0edb3f1640dd}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{e777c7de-72d3-47fe-89c8-b49f9d00e578}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GCEA\",\"cohort\":\"1"
		":17lx:\",\"cohorthint\":\"desktop_1_flatbuffer\",\"cohortname\":\"desktop_1_flatbuffer\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5c953c75dab5fcbf3e90fb5d8098380b106ccb6fbafa0ea714a917df6fea814e\"}]},\"ping\":{\"ping_freshness\":\"{a48283a5-b2da-4e2b-9021-253037a15d88}\",\"rd\":5898},\"tag\":\"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"30.1\"},{\"appid\":\"cocncanleafgejenidihemfflagifjic\",\"brand\":\"GCEA\",\"cohort\":\"1:13hr:"
		"\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.481c6b6e5d4234c7838fe16f9f87ec651474ac4ce5c429ff57094f93f8c730ea\"}]},\"ping\":{\"ping_freshness\":\"{fced3530-5a59-48f6-9ff5-4e1857ef8c3b}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.11.28.1510\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{aace302a-4d3e-4d70-8717-ea4b76cd1e27}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\""
		"enabled\":true,\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{fcff3680-bcd5-47f3-9c7d-b15f56f24009}\",\"rd\":5898},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.3650\"},\"prodversion\":\"110.0.5481.105\",\"protocol\":\"3.1\",\"requestid\":\"{a785066c-1300-482f-b4b6-6b3e6f35e9d6}\",\"sessionid\":\"{23e1ef69-ca8f-43f8-a2ec-f1329a82db4c}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.152\"},\"updaterversion\":\"110.0.5481.105\"}}", 
		"LAST");

	lr_end_transaction("trx_Landing_Page", 2);
	
		
	lr_start_transaction("trx_Speakers_Link");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(5);

	web_url("products", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("attributes", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("category-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":8145,\"downloaded\":25224,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7877\",\"previousversion\":\"7876\",\"total\":25224,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
		"chrome_component/adscu3jvvlqhtqgxbaus6ez7qyeq_7877/hfnkpimlhhgieaddgfemjhofmfblmnib_7877_all_b2zzeraxs4wtgj67jaybebf23e.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.caf6107592a54bd0bb55e89c14d7d21c8ab667b47f9b8c92fd12d8d152e5ddcc\",\"nextversion\":\"7877\",\"previousfp\":\"1.a95c9483e49c8e8f5c5276ac9894c96998014bbe088ffe2256a7fef4b21781f4\",\"previousversion\":\"7876\"}],\"installdate\":5810,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.caf6107592a54bd0bb55e89c14d7d21c8ab667b47f9b8c92fd12d8d152e5ddcc\"}]},\"version\":\"7877\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.3650\"},\"prodversion\":\"110.0.5481.105\",\"protocol\":\"3.1\",\"requestid\":\""
		"{4b988b1d-a8f3-4a92-9ad6-db830d603bc4}\",\"sessionid\":\"{23e1ef69-ca8f-43f8-a2ec-f1329a82db4c}\",\"updaterversion\":\"110.0.5481.105\"}}", 
		"LAST");

	lr_end_transaction("trx_Speakers_Link",2);

	lr_start_transaction("trx_Speakers_BuyNow");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(12);

	web_url("19", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/products/19", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products_2", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("trx_Speakers_BuyNow",2);
	

	lr_start_transaction("trx_Tablets_Link");	
	web_url("product-page.html",
		"URL=http://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("all_data", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTEwLjAuNTQ4MS4xMDUaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDD-g8aAhgFmTvp0yIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQ5ewLGgIYBcWUklIiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEK7CDBoCGAWA1XnzIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBRhUMfciBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEM0xGgIYBTnEZIciBCABIAIoBBooCA8QARoaCg0IDxAGGAEiAzAwMTABELpzGgIYBYvykLUiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgFiHYuhCIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIBoCGAVR9vtcIgQgASACKAEaKAgIEAEaGg"
		"oNCAgQBhgBIgMwMDEwARCAEhoCGAVjJrb0IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARDR3gEaAhgF_fKOISIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQgeYLGgIYBWt_LF8iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEM3yBhoCGAW43fEhIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCKFxoCGAXNuNQWIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");
	lr_end_transaction("trx_Tablets_Link",2);


	lr_start_transaction("trx_Tablets_BuyNow");

	web_stream_open("ID=1", "URL=http://advantageonlineshopping.com/css/videos/13543361_299823923688824_1410005144_n.mp4", "Protocol=HTTP", "LAST");

	 







	web_stream_close("ID=1", "LAST");

	lr_end_transaction("trx_Tablets_BuyNow",2);

	 
# 382 "Action.c"
	
	
	lr_start_transaction("trx_Search_Mice");

	web_url("search-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/search-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("trx_Search_Mice",2);

	lr_think_time(23);

	lr_start_transaction("trx_Contact_Us");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=110.0.5481.105&lang=en-US&acceptformat=crx3&x=id%3Dgcodaohiclimdbpgfhnimcolninnacpl%26v%3D0.0.0.0%26installedby%3Dexternal%26uc%26brand%3DGCEA", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");
 
	lr_think_time(8);

	web_custom_request("email", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/support/contact_us/email", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"categoryId\":1,\"email\":\"test@anyemail.com\",\"productId\":9,\"text\":\"Does this run Linux?\"}", 
		"LAST");

	lr_end_transaction("trx_Contact_Us",2);

	return 0;
}
# 5 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\work\\ot_vugen_scripts\\web-aos-public-02242023-v1\\\\combined_web-aos-public-02242023-v1.c" 2

